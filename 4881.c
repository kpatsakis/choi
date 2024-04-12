void fun()
{
  int entity_1 = 95;
  char* entity_7;
  char entity_3[91] = "";
  entity_3 = NULL;
  entity_7 = (char*)malloc(2*sizeof(char));
  entity_7[2-1]='';
  memset(entity_3, 'D', 91-1);
  entity_3[91-1]='';
  memcpy(entity_7, entity_3, 91*sizeof(char));
}