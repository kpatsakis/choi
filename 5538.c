void fun()
{
  char entity_0[2] = "";
  entity_0 = NULL;
  char entity_3[88] = "";
  entity_3 = NULL;
  char* entity_2;
  memset(entity_0, 'j', 2-1);
  entity_0[2-1]='';
  memset(entity_3, 'Z', 88-1);
  entity_3[88-1]='';
  entity_2 = (char*)malloc(68*sizeof(char));
  entity_2[68-1]='';
  memcpy(entity_2, entity_0, 2*sizeof(char));
}