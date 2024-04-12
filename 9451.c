void fun()
{
  int entity_0 = 34;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(3*sizeof(char));
  entity_3[3-1]='';
  memset(entity_4, 'f', entity_0-1);
  entity_4[entity_0-1]='';
  entity_0 = 70;
  entity_4[40] = 'h';
}