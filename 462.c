void fun()
{
  int entity_7 = 15;
  entity_7 = 15;
  char* entity_2;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  entity_2 = (char*)malloc(16*sizeof(char));
  entity_2[16-1]='';
  memset(entity_8, 'r', entity_7-1);
  entity_8[entity_7-1]='';
  strcpy(entity_2, entity_8);
}