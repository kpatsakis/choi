void fun()
{
  int entity_8 = 92;
  char entity_7[83] = "";
  entity_7 = NULL;
  char* entity_3;
  char* entity_4;
  entity_4 = (char*)malloc(69*sizeof(char));
  entity_4[69-1]='';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memset(entity_7, 'M', 83-1);
  entity_7[83-1]='';
  memcpy(entity_3, entity_7, 83*sizeof(char));
}