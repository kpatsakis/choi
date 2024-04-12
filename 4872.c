void fun()
{
  int entity_2 = 67;
  char* entity_4;
  char entity_1 = 'k';
  char entity_6[38] = "";
  entity_6 = NULL;
  memset(entity_6, 'd', 38-1);
  entity_6[38-1]='';
  entity_4 = (char*)malloc(30*sizeof(char));
  entity_4[30-1]='';
  entity_6[entity_2] = 'n';
}