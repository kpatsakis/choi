void fun()
{
  char* entity_0;
  char entity_1[70] = "";
  entity_1 = NULL;
  memset(entity_1, 'q', 70-1);
  entity_1[70-1]='';
  entity_0 = (char*)malloc(91*sizeof(char));
  entity_0[91-1]='';
  memcpy(entity_0, entity_1, 70*sizeof(char));
}