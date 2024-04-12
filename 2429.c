void fun()
{
  int entity_4 = 38;
  char* entity_2;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  entity_2 = (char*)malloc(27*sizeof(char));
  entity_2[27-1]='';
  memset(entity_7, 'J', entity_4-1);
  entity_7[entity_4-1]='';
  entity_7[25] = 'K';
}