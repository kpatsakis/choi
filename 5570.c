void fun()
{
  char entity_3 = 'y';
  char entity_1[4] = "";
  entity_1 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(78*sizeof(char));
  entity_6[78-1]='';
  memset(entity_1, 'F', 4-1);
  entity_1[4-1]='';
  entity_1[100] = 'E';
}