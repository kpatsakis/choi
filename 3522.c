void fun()
{
  int entity_6 = 14;
  char* entity_3;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  memset(entity_2, 'x', entity_6-1);
  entity_2[entity_6-1]='';
  entity_3 = (char*)malloc(44*sizeof(char));
  entity_3[44-1]='';
  memcpy(entity_3, entity_2, entity_6*sizeof(char));
}