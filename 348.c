void fun()
{
  char* entity_4;
  char entity_1 = 'T';
  char entity_0[70] = "";
  entity_0 = NULL;
  char* entity_8;
  memset(entity_0, 'B', 70-1);
  entity_0[70-1]='';
  entity_8 = (char*)malloc(7*sizeof(char));
  entity_8[7-1]='';
  entity_4 = (char*)malloc(93*sizeof(char));
  entity_4[93-1]='';
  entity_0[6] = 'O';
}