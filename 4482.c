void fun()
{
  int entity_6 = 83;
  char* entity_3;
  char* entity_0;
  char entity_1[82] = "";
  entity_1 = NULL;
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  memset(entity_1, 'h', 82-1);
  entity_1[82-1]='';
  entity_0 = (char*)malloc(82*sizeof(char));
  entity_0[82-1]='';
  entity_6 = 99;
  memcpy(entity_3, entity_1, 82*sizeof(char));
}