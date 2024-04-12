void fun()
{
  char* entity_7;
  char entity_8[92] = "";
  entity_8 = NULL;
  entity_7 = (char*)malloc(66*sizeof(char));
  entity_7[66-1]='';
  memset(entity_8, 'R', 92-1);
  entity_8[92-1]='';
  entity_8[85] = 'k';
}