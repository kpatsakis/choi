void fun()
{
  int entity_7 = 60;
  char* entity_3;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  entity_3 = (char*)malloc(5*sizeof(char));
  entity_3[5-1]='';
  memset(entity_2, 'T', entity_7-1);
  entity_2[entity_7-1]='';
  memcpy(entity_3, entity_2, entity_7*sizeof(char));
}