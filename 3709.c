void fun()
{
  int entity_2 = 49;
  entity_2 = 66;
  char entity_3[98] = "";
  entity_3 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  memset(entity_3, 't', 98-1);
  entity_3[98-1]='';
  memcpy(entity_7, entity_3, 98*sizeof(char));
}