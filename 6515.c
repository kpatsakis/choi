void fun()
{
  int entity_2 = 80;
  int entity_6 = 30;
  char* entity_4;
  char entity_3[28] = "";
  entity_3 = NULL;
  char* entity_8;
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  entity_8 = (char*)malloc(26*sizeof(char));
  entity_8[26-1]='';
  memset(entity_3, 'z', 28-1);
  entity_3[28-1]='';
  memcpy(entity_4, entity_3, 28*sizeof(char));
}