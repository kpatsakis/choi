void fun()
{
  int entity_8 = 32;
  char entity_2[35] = "";
  entity_2 = NULL;
  char* entity_1;
  char entity_4[87] = "";
  entity_4 = NULL;
  memset(entity_4, 'M', 87-1);
  entity_4[87-1]='';
  memset(entity_2, 'r', 35-1);
  entity_2[35-1]='';
  entity_1 = (char*)malloc(72*sizeof(char));
  entity_1[72-1]='';
  memcpy(entity_1, entity_4, 87*sizeof(char));
}