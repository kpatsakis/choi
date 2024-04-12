void fun()
{
  int entity_3 = 43;
  int entity_2 = 44;
  char entity_7 = 'C';
  char entity_5[26] = "";
  entity_5 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(91*sizeof(char));
  entity_1[91-1]='';
  memset(entity_5, 'C', 26-1);
  entity_5[26-1]='';
  entity_5[entity_2] = 'Y';
}