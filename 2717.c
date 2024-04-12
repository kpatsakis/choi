void fun()
{
  char* entity_5;
  char* entity_1;
  char entity_6 = 'l';
  char entity_2[29] = "";
  entity_2 = NULL;
  memset(entity_2, 'f', 29-1);
  entity_2[29-1]='';
  entity_1 = (char*)malloc(85*sizeof(char));
  entity_1[85-1]='';
  entity_5 = (char*)malloc(18*sizeof(char));
  entity_5[18-1]='';
  entity_2[97] = 't';
}