void fun()
{
  int entity_3 = 0;
  int entity_7 = 45;
  char entity_6[94] = "";
  entity_6 = NULL;
  char* entity_1;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  entity_1 = (char*)malloc(82*sizeof(char));
  entity_1[82-1]='';
  memset(entity_6, 'a', 94-1);
  entity_6[94-1]='';
  memset(entity_4, 'x', entity_7-1);
  entity_4[entity_7-1]='';
  memcpy(entity_1, entity_4, entity_7*sizeof(char));
}