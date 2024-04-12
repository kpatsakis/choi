void fun()
{
  int entity_0 = 51;
  int entity_7 = 11;
  entity_0 = 27;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(44*sizeof(char));
  entity_2[44-1]='';
  memset(entity_3, 'r', entity_0-1);
  entity_3[entity_0-1]='';
  memcpy(entity_2, entity_3, entity_0*sizeof(char));
}