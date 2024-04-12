void fun()
{
  int entity_2 = 89;
  char* entity_7;
  char entity_5[entity_2] = "";
  entity_7 = (char*)malloc(54*sizeof(char));
  entity_7[0]='0';
  memset(entity_5, 'd', entity_2-1);
  entity_5[entity_2-1]='0';
  entity_2 = 92;
  strcpy(entity_7, entity_5);
}