void fun()
{
  int entity_2 = 64;
  char* entity_7;
  char entity_6[16] = "";
  entity_6 = NULL;
  char entity_5 = 'J';
  memset(entity_6, 'S', 16-1);
  entity_6[16-1]='';
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  strcpy(entity_7, entity_6);
}