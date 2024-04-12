void fun()
{
  int entity_3 = 43;
  char entity_5[35] = "";
  entity_5 = NULL;
  char* entity_6;
  memset(entity_5, 'z', 35-1);
  entity_5[35-1]='';
  entity_6 = (char*)malloc(68*sizeof(char));
  entity_6[68-1]='';
  entity_5[53] = 'H';
}