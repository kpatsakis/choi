void fun()
{
  int entity_3 = 17;
  char entity_7[70] = "";
  entity_7 = NULL;
  char* entity_1;
  memset(entity_7, 'E', 70-1);
  entity_7[70-1]='';
  entity_1 = (char*)malloc(86*sizeof(char));
  entity_1[86-1]='';
  entity_7[entity_3] = 'B';
}