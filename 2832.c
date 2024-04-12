void fun()
{
  int entity_7 = 4;
  char entity_8 = 'O';
  char* entity_5;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  entity_5 = (char*)malloc(61*sizeof(char));
  entity_5[61-1]='';
  memset(entity_2, 'g', entity_7-1);
  entity_2[entity_7-1]='';
  memcpy(entity_5, entity_2, entity_7*sizeof(char));
}