void fun()
{
  int entity_3 = 24;
  int entity_4 = 57;
  char entity_7[60] = "";
  entity_7 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(12*sizeof(char));
  entity_5[12-1]='';
  memset(entity_7, 'Z', 60-1);
  entity_7[60-1]='';
  entity_7[entity_4] = 'C';
}