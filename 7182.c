void fun()
{
  int entity_3 = 97;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char entity_6 = 'l';
  char* entity_4;
  entity_4 = (char*)malloc(69*sizeof(char));
  entity_4[69-1]='';
  memset(entity_1, 'T', entity_3-1);
  entity_1[entity_3-1]='';
  memcpy(entity_4, entity_1, entity_3*sizeof(char));
}