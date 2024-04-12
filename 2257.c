void fun()
{
  char* entity_6;
  char entity_4 = 'o';
  char entity_1 = 'O';
  char entity_0[70] = "";
  entity_0 = NULL;
  entity_6 = (char*)malloc(56*sizeof(char));
  entity_6[56-1]='';
  memset(entity_0, 'E', 70-1);
  entity_0[70-1]='';
  memcpy(entity_6, entity_0, 70*sizeof(char));
}