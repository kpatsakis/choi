void fun()
{
  int entity_7 = 54;
  char entity_2[16] = "";
  entity_2 = NULL;
  char entity_5 = 's';
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char* entity_1;
  memset(entity_4, 'a', entity_7-1);
  entity_4[entity_7-1]='';
  memset(entity_2, 'Z', 16-1);
  entity_2[16-1]='';
  entity_1 = (char*)malloc(92*sizeof(char));
  entity_1[92-1]='';
  entity_4[83] = 'l';
}