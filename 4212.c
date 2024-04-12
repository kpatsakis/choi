void fun()
{
  int entity_3 = 47;
  char* entity_5;
  char entity_4[69] = "";
  entity_4 = NULL;
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memset(entity_4, 'm', 69-1);
  entity_4[69-1]='';
  memcpy(entity_5, entity_4, 69*sizeof(char));
}