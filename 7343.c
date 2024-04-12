void fun()
{
  char* entity_4;
  char* entity_7;
  char entity_8[41] = "";
  entity_8 = NULL;
  entity_4 = (char*)malloc(55*sizeof(char));
  entity_4[55-1]='';
  memset(entity_8, 'C', 41-1);
  entity_8[41-1]='';
  entity_7 = (char*)malloc(92*sizeof(char));
  entity_7[92-1]='';
  entity_8[65] = 'y';
}