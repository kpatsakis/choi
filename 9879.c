void fun()
{
  int entity_5 = 26;
  char entity_3[61] = "";
  entity_3 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(48*sizeof(char));
  entity_6[48-1]='';
  memset(entity_3, 'F', 61-1);
  entity_3[61-1]='';
  entity_5 = 70;
  entity_3[entity_5] = 'o';
}