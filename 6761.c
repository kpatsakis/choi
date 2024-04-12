void fun()
{
  int entity_1 = 76;
  char entity_8[28] = "";
  entity_8 = NULL;
  char* entity_4;
  char* entity_6;
  entity_6 = (char*)malloc(69*sizeof(char));
  entity_6[69-1]='';
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[entity_1-1]='';
  memset(entity_8, 'l', 28-1);
  entity_8[28-1]='';
  memcpy(entity_4, entity_8, 28*sizeof(char));
}