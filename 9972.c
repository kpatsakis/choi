void fun()
{
  int entity_2 = 21;
  char* entity_3;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  memset(entity_7, 'q', entity_2-1);
  entity_7[entity_2-1]='';
  entity_3 = (char*)malloc(45*sizeof(char));
  entity_3[45-1]='';
  strcpy(entity_3, entity_7);
}