void fun()
{
  char* entity_3;
  char* entity_0;
  char entity_8[1] = "";
  entity_8 = NULL;
  memset(entity_8, 'F', 1-1);
  entity_8[1-1]='';
  entity_3 = (char*)malloc(49*sizeof(char));
  entity_3[49-1]='';
  entity_0 = (char*)malloc(69*sizeof(char));
  entity_0[69-1]='';
  memcpy(entity_0, entity_8, 1*sizeof(char));
}