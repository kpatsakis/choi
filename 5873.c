void fun()
{
  int entity_7 = 4;
  entity_7 = 18;
  char entity_2[64] = "";
  entity_2 = NULL;
  char entity_9 = 'J';
  char* entity_3;
  memset(entity_2, 'O', 64-1);
  entity_2[64-1]='';
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[entity_7-1]='';
  strcpy(entity_3, entity_2);
}