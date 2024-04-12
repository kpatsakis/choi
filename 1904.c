void fun()
{
  int entity_2 = 37;
  char* entity_8;
  char* entity_4;
  char entity_6[84] = "";
  entity_6 = NULL;
  entity_8 = (char*)malloc(70*sizeof(char));
  entity_8[70-1]='';
  memset(entity_6, 'p', 84-1);
  entity_6[84-1]='';
  entity_4 = (char*)malloc(87*sizeof(char));
  entity_4[87-1]='';
  entity_6[73] = 'r';
}