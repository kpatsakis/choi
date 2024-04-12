void fun()
{
  int entity_3 = 45;
  char* entity_5;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  entity_5 = (char*)malloc(25*sizeof(char));
  entity_5[25-1]='';
  memset(entity_8, 'S', entity_3-1);
  entity_8[entity_3-1]='';
  entity_8[73] = 'K';
}