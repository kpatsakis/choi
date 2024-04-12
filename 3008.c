void fun()
{
  int entity_1 = 70;
  char* entity_7;
  char entity_6[15] = "";
  entity_6 = NULL;
  char entity_3 = 'D';
  memset(entity_6, 'j', 15-1);
  entity_6[15-1]='';
  entity_7 = (char*)malloc(56*sizeof(char));
  entity_7[56-1]='';
  strcpy(entity_7, entity_6);
}