void fun()
{
  int entity_0 = 54;
  char* entity_5;
  char entity_4[69] = "";
  entity_4 = NULL;
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  memset(entity_4, 'z', 69-1);
  entity_4[69-1]='';
  memcpy(entity_5, entity_4, 69*sizeof(char));
}