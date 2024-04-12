void fun()
{
  int entity_7 = 28;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  char* entity_2;
  memset(entity_6, 'G', entity_7-1);
  entity_6[entity_7-1]='';
  entity_2 = (char*)malloc(94*sizeof(char));
  entity_2[94-1]='';
  entity_7 = 29;
  memcpy(entity_2, entity_6, entity_7*sizeof(char));
}