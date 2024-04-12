void fun()
{
  int entity_0 = 90;
  char entity_8[59] = "";
  entity_8 = NULL;
  char entity_5 = 'Y';
  char* entity_3;
  memset(entity_8, 'g', 59-1);
  entity_8[59-1]='';
  entity_3 = (char*)malloc(82*sizeof(char));
  entity_3[82-1]='';
  memcpy(entity_3, entity_8, 59*sizeof(char));
}