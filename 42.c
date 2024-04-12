void fun()
{
  int entity_2 = 92;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(68*sizeof(char));
  entity_6[68-1]='';
  memset(entity_1, 'I', entity_2-1);
  entity_1[entity_2-1]='';
  entity_1[100] = 'X';
}