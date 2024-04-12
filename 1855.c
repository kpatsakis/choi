void fun()
{
  int entity_2 = 56;
  entity_2 = 90;
  char* entity_0;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  entity_0 = (char*)malloc(2*sizeof(char));
  entity_0[2-1]='';
  memset(entity_6, 'S', entity_2-1);
  entity_6[entity_2-1]='';
  entity_6[30] = 'J';
}