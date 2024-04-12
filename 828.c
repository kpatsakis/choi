void fun()
{
  int entity_3 = 2;
  char entity_4[76] = "";
  entity_4 = NULL;
  char* entity_5;
  char entity_2[67] = "";
  entity_2 = NULL;
  memset(entity_4, 'z', 76-1);
  entity_4[76-1]='';
  entity_5 = (char*)malloc(76*sizeof(char));
  entity_5[76-1]='';
  memset(entity_2, 'z', 67-1);
  entity_2[67-1]='';
  entity_3 = 4;
  entity_4[entity_3] = 'k';
}