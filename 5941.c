void fun()
{
  char entity_6 = 'L';
  char* entity_0;
  char entity_8[22] = "";
  entity_8 = NULL;
  char* entity_3;
  entity_0 = (char*)malloc(54*sizeof(char));
  entity_0[54-1]='';
  entity_3 = (char*)malloc(69*sizeof(char));
  entity_3[69-1]='';
  memset(entity_8, 'N', 22-1);
  entity_8[22-1]='';
  memcpy(entity_3, entity_8, 22*sizeof(char));
}