void fun()
{
  int entity_0 = 84;
  int entity_4 = 11;
  char entity_7[9] = "";
  entity_7 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memset(entity_7, 'j', 9-1);
  entity_7[9-1]='';
  memcpy(entity_2, entity_7, 9*sizeof(char));
}