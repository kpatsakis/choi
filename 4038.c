void fun()
{
  char* entity_1;
  char entity_0[54] = "";
  entity_0 = NULL;
  memset(entity_0, 'x', 54-1);
  entity_0[54-1]='';
  entity_1 = (char*)malloc(92*sizeof(char));
  entity_1[92-1]='';
  entity_0[95] = 'O';
}