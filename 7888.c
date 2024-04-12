void fun()
{
  int entity_3 = 28;
  int entity_9 = 96;
  char* entity_7;
  char entity_5[38] = "";
  entity_5 = NULL;
  memset(entity_5, 'n', 38-1);
  entity_5[38-1]='';
  entity_7 = (char*)malloc(79*sizeof(char));
  entity_7[79-1]='';
  entity_5[entity_9] = 'D';
}