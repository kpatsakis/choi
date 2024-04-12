void fun()
{
  int entity_5 = 5;
  int entity_7 = 12;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(48*sizeof(char));
  entity_2[48-1]='';
  memset(entity_3, 'u', entity_7-1);
  entity_3[entity_7-1]='';
  entity_7 = 94;
  memcpy(entity_2, entity_3, entity_7*sizeof(char));
}