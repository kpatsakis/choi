void fun()
{
  char entity_2[4] = "";
  entity_2 = NULL;
  char* entity_7;
  memset(entity_2, 'W', 4-1);
  entity_2[4-1]='';
  entity_7 = (char*)malloc(66*sizeof(char));
  entity_7[66-1]='';
  entity_2[87] = 'f';
}