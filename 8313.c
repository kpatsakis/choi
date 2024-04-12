void fun()
{
  int entity_7 = 22;
  char* entity_2;
  char entity_6 = 'T';
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  memset(entity_4, 'J', entity_7-1);
  entity_4[entity_7-1]='';
  entity_2 = (char*)malloc(38*sizeof(char));
  entity_2[38-1]='';
  entity_4[68] = 'e';
}