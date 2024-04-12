void fun()
{
  int entity_7 = 7;
  int entity_3 = 67;
  char entity_6 = 'C';
  char* entity_4;
  char entity_2[99] = "";
  entity_2 = NULL;
  memset(entity_2, 'D', 99-1);
  entity_2[99-1]='';
  entity_4 = (char*)malloc(11*sizeof(char));
  entity_4[11-1]='';
  entity_2[entity_3] = 'H';
}